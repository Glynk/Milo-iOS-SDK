![1--3- (1).png](https://bitbucket.org/repo/EgxAzaa/images/163077752-1--3-%20%281%29.png)

Welcome to Milo SDK's Wiki!

Here you can find information about how to integrate Milo SDK with your app.

### Current stable version - **8.0** ![ezgif-5-eb5c5ee059be.gif](https://bitbucket.org/repo/EgxAzaa/images/2979352723-ezgif-5-eb5c5ee059be.gif)

## Requirements

- iOS 11.0+
- Xcode 10.2+
- Swift 5+

## Communication

- In case you have any issues please contact [sdk@getmilo.app](sdk@getmilo.app)

## Installation

### CocoaPods

[CocoaPods](https://cocoapods.org) is a dependency manager for Cocoa projects. For usage and installation instructions, visit their website. To integrate MiloSdk into your Xcode project using CocoaPods, specify it in your `Podfile`:

```ruby
pod 'MiloSdk'
```

## Initialization 


### Info.plist file chnages

Right click on Info.plist and click "Open As" -> "Source Code". Add the below strings (ignore if you already have these) - 

```html
<key>NSCameraUsageDescription</key>
<string>Allow app to access this device&apos;s camera to upload profile picture &amp; create posts.</string>
<key>NSPhotoLibraryUsageDescription</key>
<string>Allow app to access this device&apos;s photo library to upload profile picture &amp; create posts.</string>


<key>LSApplicationQueriesSchemes</key>
<array>
    <string>miloapp</string>
</array>

```

## Passing parameters and authenticating user


Open `AppDelegate.swift`

```swift
import MiloSdk
```

```swift
let miloClientSecret = ""

func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
    ...
    ...
    
    MiloSDK.shared.setClientSecret(clientSecret)
    MiloSDK.shared.setPhoneNumber("9887156125")
    MiloSDK.shared.setEmail("luke@tatooine.com")
    MiloSDK.shared.setFirstName("Luke")
    MiloSDK.shared.setLastName("Skywalker")
    MiloSDK.shared.setGender("male")
    MiloSDK.shared.setDateOfBirth("10-07-1972")

    MiloSDK.shared.initializeMiloSDK()
    ...
    ...
    return true
}
```

**clientSecret** - _Mandatory field_. Request the client secret from sdk@getmilo.app or use you the SDK dashboard to create client secrets.
**phoneNumber** - _Either phone number or email is mandatory_. Pass a string field, can contain country code.

**email** - _Either email or phone number is mandatory_. Pass a valid email address in string format.

**firstName** - _Mandatory field_. String field which accepts users' first name.

**lastName** - _Optional field_. String fields which accept users' last name.

**gender** - _Optional field_. Either 'male' or 'female' can be passed to identify the users' gender.

**dateOfBirth** - _Optional field_. This is a string field with the date format dd-mm-yyyy

## Launching the SDK

On the controller where you'd like to open the Milo screen

```swift
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

### Security Disclosure

If you believe you have identified a security vulnerability with MiloSdk, you should report it as soon as possible via email to sdk@getmilo.app.

## Notes
Please use only the methods and UI components documented in this Wiki, do not use any of the undocumented methods although they may be exposed via any of the SDK classes.
