# -*- ruby -*-

require "rubygems"
require "hoe"
require 'rake/extensiontask'

# Hoe.plugin :compiler
# Hoe.plugin :gem_prelude_sucks
# Hoe.plugin :inline
# Hoe.plugin :racc
# Hoe.plugin :rcov
# Hoe.plugin :rubyforge

Hoe.spec "hello" do
  self.extra_dev_deps << ['rake-compiler', '>= 0']
  self.spec_extras = { :extensions => ["ext/hello/extconf.rb"] }
  developer("Me", "email@about.me")
  license "MIT" # this should match the license in the README
end

Rake::ExtensionTask.new "hello" do |ext|
  ext.lib_dir = "lib/hello"
end

Rake::Task[:test].prerequisites << :compile
