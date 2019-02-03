#include "Square.h"

namespace base {

	Square::Square()
	{
	}


	Square::~Square()
	{
	}

	void Square::AddAttribute(Attribute attribute) {
		attributes_.push_back(attribute);
	}

	void Square::SetAttributes(std::initializer_list<Attribute> attributes) {
		attributes_.assign(attributes.begin(), attributes.end());
	}

	bool Square::HaveAttribute(const Attribute& attribute) const {
		for (auto& attr : attributes_) {
			if (attr.SameAttribute(attribute)) {
				return true;
			}
		}
		return false;
	}

}
