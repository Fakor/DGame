#pragma once

#include <string>

namespace base {
	class Attribute
	{
	public:
        Attribute(std::string type);
		virtual ~Attribute();

        std::string GetType() const;
		bool SameAttribute(const Attribute& other_attribute) const;
	protected:
		int id_;
        std::string type_;
	};
}
