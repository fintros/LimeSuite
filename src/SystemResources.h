/**
@file SystemResources.h
@author Lime Microsystems
@brief APIs for locating system resources.
*/

#ifndef LIMESUITE_IMAGE_RESOURCES_H
#define LIMESUITE_IMAGE_RESOURCES_H

#include <LimeSuiteConfig.h>
#include <string>
#include <vector>

namespace lime
{

/*!
 * Get the root installation directory for the library.
 * Use the configured installation prefix for the library,
 * or override with the LIME_SUITE_ROOT environment variable.
 */
LIME_API std::string getLimeSuiteRoot(void);

/*!
 * Get the full path to the user's home directory
 */
LIME_API std::string getHomeDirectory(void);

/*!
 * Get the full path to the application data directory.
 * On a unix system this is typically $HOME/.local/share.
 * On a windows system this is typically %USERPROFILE%\AppData\Roaming.
 * Also supports the APPDATA environment variable to override the default value.
 */
LIME_API std::string getAppDataDirectory(void);

/*!
 * Get a list of directories to search for image resources.
 */
LIME_API std::vector<std::string> listImageSearchPaths(void);

/*!
 * Get the full file path to an image resource given only the file name.
 * Search well known user and system directories for the specified resource,
 * as well as the paths specified by the LIME_IMAGE_PATH environment variable.
 *
 * @param name a unique name for the resource file including file extension
 * @return the full filesystem path to the resource if it exists or empty
 */
LIME_API std::string locateImageResource(const std::string &name);

}

#endif //LIMESUITE_IMAGE_RESOURCES_H
