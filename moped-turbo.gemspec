# encoding: utf-8
lib = File.expand_path('../lib/', __FILE__)
$:.unshift lib unless $:.include?(lib)

require "moped/turbo/version"

Gem::Specification.new do |s|
  s.name        = "moped-turbo"
  s.version     = Moped::Turbo::VERSION
  s.platform    = Gem::Platform::RUBY
  s.authors     = ["Durran Jordan"]
  s.email       = ["durran@gmail.com"]
  s.homepage    = "http://mongoid.org/moped"
  s.summary     = "C extensions for Moped, a Ruby driver for MongoDB"
  s.description = s.summary

  s.add_dependency("moped", ["~> 1.1.3"])

  s.files = Dir.glob("lib/**/*") + Dir.glob("ext/**/*.{c,h,rb}") + %w(CHANGELOG.md LICENSE README.md)
  s.extensions = [ "ext/moped/turbo/extconf.rb" ]
  s.require_path = "lib"
end
