Pod::Spec.new do |s|
s.name         = 'MetalPetal'
s.version      = '1.0'
s.author       = { 'YuAo' => 'me@imyuao.com' }
s.homepage     = 'https://github.com/YuAo/MetalPetal'
s.summary      = 'A image processing framework based on Metal.'
s.license      = { :type => 'MIT'}
s.source       = { :git => 'https://github.com/YuAo/MetalPetal.git', :tag => s.version}
s.requires_arc = true
s.ios.deployment_target = '9.0'
s.source_files = '**/*.{h,m,c,mm,metal}'
end