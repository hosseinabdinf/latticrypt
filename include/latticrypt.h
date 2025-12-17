#ifndef LATTICRYPT_H
#define LATTICRYPT_H

#include <string>

namespace latticrypt {

/**
 * @brief Get the version of the latticrypt library
 * @return Version string
 */
std::string getVersion();

/**
 * @brief Initialize the latticrypt library
 * @return true if initialization was successful, false otherwise
 */
bool initialize();

} // namespace latticrypt

#endif // LATTICRYPT_H
