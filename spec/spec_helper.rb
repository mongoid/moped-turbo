require "rspec"
$:.unshift((Pathname(__FILE__).dirname.parent + "lib").to_s)
$:.unshift((Pathname(__FILE__).dirname.parent + "ext").to_s)

require "moped"

RSpec.configure do |config|

  config.before(:suite) do
    Dir.chdir(Pathname(__FILE__).dirname.parent + "ext/moped") do
      `bundle exec ruby turbo/extconf.rb`
      `make`
    end
    require "moped-turbo"
  end
end
