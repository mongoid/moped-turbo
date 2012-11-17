source :rubygems

group :test do
  gem "rspec", "~> 2.12"
  unless ENV["CI"]
    gem "guard-rspec"
    gem "rb-fsevent", "~> 0.9.1"
  end
end

gem "rake"

gemspec
