require "rspec/core/rake_task"

$LOAD_PATH.unshift File.expand_path("../lib", __FILE__)
require "moped-turbo/version"

task :gem => :build
task :build do
  system "gem build moped-turbo.gemspec"
end

task :install => :build do
  system "sudo gem install moped-turbo-#{MopedTurbo::VERSION}.gem"
end

task :release => :build do
  system "git tag -a v#{MopedTurbo::VERSION} -m 'Tagging #{MopedTurbo::VERSION}'"
  system "git push --tags"
  system "gem push moped-turbo-#{MopedTurbo::VERSION}.gem"
  system "rm moped-turbo-#{MopedTurbo::VERSION}.gem"
end

RSpec::Core::RakeTask.new(:spec) do |spec|
  spec.pattern = "spec/**/*_spec.rb"
end

task :default => :spec
