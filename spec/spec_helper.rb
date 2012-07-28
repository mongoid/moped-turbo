require "rspec"
$:.unshift((Pathname(__FILE__).dirname.parent + "lib").to_s)

require "moped"

RSpec.configure do |config|

  if ENV["CI"]
    config.before(:suite) do
      # Compile all the c extensions once.
    end
  else
    confir.before do
      # Compile the c extension of the class under test.
    end
  end
end
