#ifndef EZC3D_CONFIG_H
#define EZC3D_CONFIG_H

// dllexport/import declaration
#ifdef _WIN32
    #ifdef EZC3D_API_EXPORTS
        #define EZC3D_API __declspec(dllexport)
    #else
        #define EZC3D_API __declspec(dllimport)
    #endif
#else
    #define EZC3D_API
#endif

// If fast or safe accessor should be used
//#define USE_MATRIX_FAST_ACCESSOR

// Write down the version of the ezc3d
#define EZC3D_VERSION "1.3.3"
#define EZC3D_CONTACT "pariterre@hotmail.com"

#endif // EZC3D_CONFIG_H
