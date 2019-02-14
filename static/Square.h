#pragma once

#include <vector>
#include <string>
#include <initializer_list>

#include "Attribute.h"
#include "position.h"

namespace base {

	class Square
	{
	public:
        Square(Position pos);
        virtual ~Square();

        Position GetPosition() const;

		void AddAttribute(Attribute attribute);
        void RemoveAttribute(Attribute attribute);
		void SetAttributes(std::initializer_list<Attribute> attributes);

		bool HaveAttribute(const Attribute& attribute) const;
        std::string GetAttributeString() const;
	private:
		std::vector<Attribute> attributes_;
        Position pos_;
	};

}
