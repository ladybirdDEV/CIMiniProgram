#
# Be sure to run `pod lib lint CIMiniProgram.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'CIMiniProgram'
  s.version          = '0.1.65'
  s.summary          = 'A short description of CIMiniProgram.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/ladybirdDEV/CIMiniProgram'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'idbeny' => 'idbeny@163.com' }
  s.source           = { :git => 'https://github.com/ladybirdDEV/CIMiniProgram.git', :tag => s.version.to_s }
  s.swift_version = '5.0'
  s.ios.deployment_target = '13.0'
  s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  s.static_framework = true
  
  s.vendored_frameworks = "CIMiniProgram/CIMiniProgramSDK.framework"
  s.resource = ['CIMiniProgram/Assets/*']

  s.dependency 'CINetworkingSDK'
  s.dependency 'CICategoriesSDK'
  s.dependency 'CIPhotoBrowserSDK'
  s.dependency 'CICameraSDK'
  s.dependency 'CIViewFileSDK'
  s.dependency 'CIUDPSocketSDK'
  s.dependency 'CIBluetoothSDK'
  s.dependency 'CIOAuthSDK'
  s.dependency 'CIPushSDK'
  s.dependency 'CIPaySDK'
  s.dependency 'CIShareSDK'

  s.dependency 'SSZipArchive', '2.4.3'
  s.dependency 'MJRefresh', '3.7.5'
  s.dependency 'CocoaLumberjack', '3.8.0'
  s.dependency 'Masonry'

  s.frameworks = 'UIKit', 'CoreServices', 'WebKit'
end
