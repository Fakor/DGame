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

    void Square::RemoveAttribute(Attribute attribute){
        for (auto it = attributes_.begin(); it != attributes_.end(); ++it) {
            if(it->SameAttribute(attribute)){
                attributes_.erase(it);
                return;
            }
        }
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

    std::string Square::GetAttributeString() const{
        std::string str="";
        for (auto& attr : attributes_) {
            str += attr.GetType();
        }
        return str;
    }

}
