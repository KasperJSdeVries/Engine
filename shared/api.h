#ifndef API_H
#define API_H

//#ifdef KEXPORT
// Exports
#ifdef _MSC_VER
#define API __declspec(dllexport)
#else
#define API __attribute__((visibility("default")))
#endif
#else
// Imports
#ifdef _MSC_VER
/** @brief Import/export qualifier */
#define API __declspec(dllimport)
#else
/** @brief Import/export qualifier */
#define API
#endif
//#endif

#endif //API_H
