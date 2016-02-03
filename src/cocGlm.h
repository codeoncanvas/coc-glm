
#pragma once

#if defined( COC_OF )

#define GLM_FORCE_SIZE_FUNC
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include "ofVectorMath.h"

namespace coc {

static ofVec2f toOf( const glm::vec2 &_v ) {
    return ofVec2f( _v.x, _v.y );
}

}

#endif