require "spec_helper"

describe FalseClass do

  describe "#__bson_dump__" do

    let(:string) do
      ""
    end

    let!(:dumped) do
      false.__bson_dump__(string, "hello")
    end

    it "adds the serialized output to the string" do
      string.should eq("\bhello\x00\x00")
    end

    it "returns the string" do
      dumped.should eq(string)
    end
  end
end
