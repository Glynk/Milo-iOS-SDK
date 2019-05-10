Pod::Spec.new do |s|

s.name         = "MiloSdk"
s.version      = "6.0"
s.summary      = "Milo SDK"
s.description  = <<-DESC
For Milo SDK implementation steps, check README.md.
DESC

s.homepage     = "https://github.com/Glynk/Milo-iOS-SDK.git"

s.license      = "MIT"
s.author             = { "Jaleel Nazir" => "jaleel@glynk.com" }
s.platform     = :ios, "11.0"
s.source       = { :git => "https://github.com/Glynk/Milo-iOS-SDK.git", :tag => "#{s.version}" }

s.source_files  = "MiloSdk/*.{h}"
s.ios.framework  = 'UIKit'
s.ios.vendored_frameworks = 'MiloSdk/MiloSdk.framework'


s.static_framework = true

s.dependency 'Alamofire', '4.8.1'
s.dependency 'Amplitude-iOS', '4.5.0'
s.dependency 'Crashlytics', '3.12.0'
s.dependency 'Fabric', '1.9.0'
s.dependency 'Google/Analytics', '2.0.4'
s.dependency 'IQKeyboardManagerSwift', '6.2.0'
s.dependency 'Kingfisher', '5.1.1'
s.dependency 'lottie-ios', '3.0.4'
s.dependency 'ObjectMapper', '3.4.2'
s.dependency 'Socket.IO-Client-Swift', '14.0.0'
s.dependency 'Atributika', '4.8.2'

s.xcconfig = { 'LIBRARY_SEARCH_PATHS' => '"$(PODS_ROOT)/MiloSdk"' }
s.requires_arc = true

end
