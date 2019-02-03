#include "Attribute.h"

namespace base {

	Attribute::Attribute()
	{
		static int id_iterator = 0;
		id_ = id_iterator++;
	}


	Attribute::~Attribute()
	{
	}

	bool Attribute::SameAttribute(const Attribute& other_attribute) const {
		return id_ == other_attribute.id_;
	}

}
