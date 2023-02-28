#
# Be sure to run `pod lib lint CIMiniProgram.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'CIMiniProgram'
  s.version          = '0.2.0'
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
  
  s.subspec 'Kit' do |kit|
    kit.dependency 'CIUDPSocket'
    kit.dependency 'CIBluetooth'
    kit.dependency 'CIOAuth'
    kit.dependency 'CIPush'
    kit.dependency 'CIPay'
    kit.dependency 'CIShare'
    
    kit.dependency 'CIMiniProgram/Core'
  end
  
  s.subspec 'Core' do |core|
    core.vendored_frameworks = "CIMiniProgram/CIMiniProgram.framework"
    core.resource = ['CIMiniProgram/Assets/*']
    
    core.dependency 'CICamera'
    core.dependency 'CICategories'
    core.dependency 'CIViewFile'
    core.dependency 'CIMPhotoBrowser'
    core.dependency 'CINetworking'
  end

  s.dependency 'SSZipArchive', '2.4.3'
  s.dependency 'MJRefresh', '3.7.5'
  s.dependency 'CocoaLumberjack', '3.8.0'
  s.dependency 'Masonry'

  s.frameworks = 'UIKit', 'CoreServices', 'WebKit'
end
