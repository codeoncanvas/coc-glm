
#pragma once

#if defined( COC_OF )

#include <glm/glm.hpp>
#include "ofVectorMath.h"

namespace coc {

<<<<<<< HEAD
static ofVec2f toOf( const glm::vec2 &_v ) {
    return ofVec2f( _v.x, _v.y );
}

}
=======
namespace coc {

	ofVec2f toOf( const glm::vec2 &_v ) {
	    return ofVec2f( _v.x, _v.y );
	}
		
}

>>>>>>> origin/master

#endif