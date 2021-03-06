#include "gabac/context_model.h"

#include <cassert>
#include <limits>

#include "gabac/cabac_tables.h"


namespace gabac {


ContextModel::ContextModel(
        unsigned char state
)
        : m_state(state)
{
    // Nothing to do here
}


ContextModel::~ContextModel() = default;



}  // namespace gabac
