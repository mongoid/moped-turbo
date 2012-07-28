require "spec_helper"

describe Moped::BSON::ObjectId do

  describe "#initialize" do

    let(:object_id) do
      described_class.new
    end

    it "generates the object id from the c extension" do
      p object_id.to_s
    end
  end
end
