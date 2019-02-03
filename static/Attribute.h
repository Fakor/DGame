#pragma once

namespace base {
	class Attribute
	{
	public:
		Attribute();
		virtual ~Attribute();

		bool SameAttribute(const Attribute& other_attribute) const;
	protected:
		int id_;
	};
}
