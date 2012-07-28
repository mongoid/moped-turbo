# vim:set filetype=ruby:
guard(
  "rspec",
  all_after_pass: false,
  cli: "--fail-fast --tty --format documentation --colour") do

  watch(%r{^spec/.+_spec\.rb$})
  watch(%r{^ext/moped/turbo/(.+)\.c$}) do |match|
    "spec/moped/turbo/#{match[1]}_spec.rb"
  end
end
