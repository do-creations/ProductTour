Pod::Spec.new do |s|
  s.name                  = 'ProductTour'
  s.version               = '0.1'
  s.ios.deployment_target = '7.0'
  s.summary               = "Quick Product Tour."
  s.homepage              = 'https://github.com/LukeDurrant/ProductTour'
  s.source                = { :git => 'https://github.com/LukeDurrant/ProductTour', :tag => s.version.to_s }
  s.source_files          = '*.{h,m}'
  s.requires_arc          = true
  s.frameworks = 'CoreGraphics', 'UIKit'


end
