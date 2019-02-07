#include "Attribute.h"

namespace base {

    Attribute::Attribute(std::string type)
        :type_{type}
	{
		static int id_iterator = 0;
		id_ = id_iterator++;
	}


	Attribute::~Attribute()
	{
	}

    std::string Attribute::GetType() const{
        return type_;
    }

	bool Attribute::SameAttribute(const Attribute& other_attribute) const {
		return id_ == other_attribute.id_;
	}

}
