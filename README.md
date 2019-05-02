# Welcome
# Milo-iOS-SDK

Welcome to Milo SDK's Wiki! Here you can find information about how to integrate Milo SDK with your app. 

## Version Information
* 4.0

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
    
    MiloSDK.shared.initializeAuthAPI(phoneNumber: "3333333333", firstName: "Jaleel", lastName: "Nazir", houseId: "", gender: "", clientSecret: miloClientSecret)
    
    ...
    ...
    
    return true
}


```

**clientSecret** - please request the client secret from ping@glynk.com

**phoneNumber** - ten digit string field without country code or '+'. For example - 8123437303

**firstName** and **lastName** - string fields which accept users' first name and last name respectively. You can choose to not send the last name.

**houseId** - Nestaway's house identifier code. This is a string field.  

**gender** - either 'male' or 'female' can be passed to identify the users' gender. 

**dateOfBirth** - is a string field with the date format dd-mm-yyyy

_Please note that all the above fields are mandatory except for **lastName** and **houseId** (this is a mandatory field for Nestaway.)_


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

