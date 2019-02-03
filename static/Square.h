#pragma once

#include <vector>
#include <initializer_list>

#include "Attribute.h"

namespace base {

	class Square
	{
	public:
		Square();
		virtual ~Square();

		void AddAttribute(Attribute attribute);
		void SetAttributes(std::initializer_list<Attribute> attributes);

		bool HaveAttribute(const Attribute& attribute) const;

	private:
		std::vector<Attribute> attributes_;
	};

}