require "spec_helper"

describe Moped::BSON::ObjectId do

  describe "#initialize" do

    let(:object_id) do
      described_class.new
    end

    pending "generates the object id from the c extension"
  end
end
