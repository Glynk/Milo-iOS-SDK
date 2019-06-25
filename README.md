# Welcome
# Milo-iOS-SDK

Welcome to Milo SDK's Wiki! Here you can find information about how to integrate Milo SDK with your app. 

## Version Information
* 6.0

## Requirements
* iOS 11.0+

## Installation for [Cocoapods](https://cocoapods.org)

```
pod 'MiloSdk'
```

## Info.Plist file chnages

1. Right click on Info.plist and click "Open As" -> "Source Code". Add the below strings (ignore if you already have these) - 

```
<key>NSCameraUsageDescription</key>
<string>Allow app to access this device&apos;s camera to upload profile picture &amp; create posts.</string>
<key>NSPhotoLibraryUsageDescription</key>
<string>Allow app to access this device&apos;s photo library to upload profile picture &amp; create posts.</string>


<key>LSApplicationQueriesSchemes</key>
<array>
    <string>miloapp</string>
</array>

```

## Initializing the SDK


1. In `AppDelegate.swift`

```
import MiloSdk

```

## Passing parameters and authenticating the user


```

let miloClientSecret = ""


func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
    ...
    ...
    
    MiloSDK.shared.setClientSecret(clientSecret)
    MiloSDK.shared.setPhoneNumber("9886156126")
    MiloSDK.shared.setFirstName("Jaleel")

    MiloSDK.shared.setLastName("Nazir")
    MiloSDK.shared.setHouseID("12324")
    MiloSDK.shared.setGender("male")
    MiloSDK.shared.setDateOfBirth("10-07-1992")

    MiloSDK.shared.initializeMiloSDK()    
    
    ...
    ...
    
    return true
}


```

**clientSecret** - Mandatory field. Please request the client secret from ping@glynk.com

**phoneNumber** - Mandatory field. Ten digit string field without country code or '+'. For example - 8123437303

**firstName** - Mandatory field. String field which accepts users' first name.

**lastName** - Optional field. String fields which accept users' last name.

**houseId** - Optional field, except for Nestaway. house identifier code. This is a string field.

**gender** - Optional field. Either 'male' or 'female' can be passed to identify the users' gender.

**dateOfBirth** - Optional field. This is a string field with the date format dd-mm-yyyy


## Hooking the Milo SDK icon on the Nestaway app

On the controller where you'd like to open the Milo screen

```
import UIKit
import MiloSdk

class ViewController: UIViewController {

    @IBOutlet weak var vWForMiloBtn: UIView!

    var btnMilo: MiloButton!

    override func viewDidLoad() {
        super.viewDidLoad()
        ...
        ...
        
        btnMilo = MiloButton.init(frame: CGRect.init(x: 0, y: 0, width: 120, height: 120))
        btnMilo.addTarget(self, action: #selector(btnMiloSdkOnClick), for: UIControl.Event.touchUpInside)
        vWForMiloBtn.addSubview(btnMilo)
        
        ...
        ...
    }

    override func viewDidLayoutSubviews() {
        super.viewDidLayoutSubviews()
        btnMilo.frame = CGRect.init(x: 0, y: 0, width: 120, height: 120)
    }

    @objc func btnMiloSdkOnClick() {
        if let vc = MiloSDK.shared.getMainVC() {
            let navVC = UINavigationController.init(rootViewController: vc)
            // Always set `Milo MainVc` in  `NavigationController` and use 'present' method, do not use 'push' method, because 'back' action is handled only for 'present'.
            present(navVC, animated: true, completion: nil)
        }
    }
}

```

In case you have any issues please contact sdkissues@glynk.com. 

Thank you!

