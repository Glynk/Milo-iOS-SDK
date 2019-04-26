# Welcome
# Milo-iOS-SDK

Welcome to Milo SDK's Wiki! Here you can find information about how to integrate Milo SDK with your app. 

## Version Information
* 2.0

## Requirements
* iOS 11.0+

## Installation for [Cocoapods](https://cocoapods.org)

```
pod 'MiloSdk'

```

## Info.Plist file chnages

1. Right click on Info.plist, click "Open As" -> "Source Code". Add the below strings

```
#!xml

<key>NSCameraUsageDescription</key>
<string>Allow app to access this device&apos;s camera to upload profile picture &amp; create posts.</string>
<key>NSPhotoLibraryUsageDescription</key>
<string>Allow app to access this device&apos;s photo library to upload profile picture &amp; create posts.</string>

```

or If you already has these strings, please ignore it

## Initializing the SDK


1. In `AppDelegate.swift`

```
#!swift

import MiloSdk

```

## Passing parameters and authenticating the user


```
#!swift

MiloSDK.shared.initializeAuthAPI(phoneNumber: "3333333333", firtName: "Amar", lastName: "N", profilePicture: "", clientSecret: clientSecret)

```

**clientSecret** - please request the client secret from ping@glynk.com

**phoneNumber** - ten digit string field without country code or '+'. For example - 8123437303

**firstName** and **lastName** - string fields which accept users' first name and last name respectively. You can choose to not send the last name.

**houseId** - Nestaway's house identifier code. This is a string field.  

**gender** - either 'male' or 'female' can be passed to identify the users' gender. 

**dateOfBirth** - is a string field with the date format dd-mm-yyyy

_Please note that all the above fields are mandatory except for **lastName** and **houseId** (this is a mandatory field for Nestaway.)_


## Hooking the Milo SDK icon on the Nestaway app

On the Controller where you will open Milo,  

```
#!swift

if let vc = MiloSDK.shared.getMainVC() {
    let navVC = UINavigationController.init(rootViewController: vc)
    self.present(navVC, animated: true, completion: nil)
}

```

Always set `Milo MainVc` in  `NavigationController` and use present. Don't use push.

In case you have any issues please contact sdkissues@glynk.com. 

Thank you!

