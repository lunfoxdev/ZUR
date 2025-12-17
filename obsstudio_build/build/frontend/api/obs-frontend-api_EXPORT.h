
#ifndef OBS_FRONTEND_API_EXPORT_H
#define OBS_FRONTEND_API_EXPORT_H

#ifdef OBS_FRONTEND_API_STATIC_DEFINE
#  define OBS_FRONTEND_API_EXPORT
#  define OBS_FRONTEND_API_NO_EXPORT
#else
#  ifndef OBS_FRONTEND_API_EXPORT
#    ifdef obs_frontend_api_EXPORTS
        /* We are building this library */
#      define OBS_FRONTEND_API_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define OBS_FRONTEND_API_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef OBS_FRONTEND_API_NO_EXPORT
#    define OBS_FRONTEND_API_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef OBS_FRONTEND_API_DEPRECATED
#  define OBS_FRONTEND_API_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef OBS_FRONTEND_API_DEPRECATED_EXPORT
#  define OBS_FRONTEND_API_DEPRECATED_EXPORT OBS_FRONTEND_API_EXPORT OBS_FRONTEND_API_DEPRECATED
#endif

#ifndef OBS_FRONTEND_API_DEPRECATED_NO_EXPORT
#  define OBS_FRONTEND_API_DEPRECATED_NO_EXPORT OBS_FRONTEND_API_NO_EXPORT OBS_FRONTEND_API_DEPRECATED
#endif

/* NOLINTNEXTLINE(readability-avoid-unconditional-preprocessor-if) */
#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef OBS_FRONTEND_API_NO_DEPRECATED
#    define OBS_FRONTEND_API_NO_DEPRECATED
#  endif
#endif

#endif /* OBS_FRONTEND_API_EXPORT_H */
