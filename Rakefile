# -*- ruby -*-

require 'rubygems'
require 'hoe'

HOE = Hoe.spec 'aes' do
  developer('Trip', 'elephanttrip@gmail.com')
  self.readme_file       = 'README.rdoc'
  self.history_file      = 'CHANGELOG.rdoc'
  self.extra_rdoc_files  = FileList['*.rdoc']
  self.extra_dev_deps    << ['rake-compiler', '>= 0']
  self.spec_extras       = { :extensions => ["ext/aes/extconf.rb"] }
  self.urls = ['google.com']
end

HOE.spec.files -= [".gemtest"]

require 'rake/extensiontask'

Rake::ExtensionTask.new(HOE.name, HOE.spec) do |ext|
  ext.lib_dir = File.join('lib', 'aes')
end

Rake::Task[:test].prerequisites << :compile