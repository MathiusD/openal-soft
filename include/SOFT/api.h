#include "AL/al.h"
#include "AL/alc.h"
#include "AL/alext.h"

/* Non-standard exports. Not part of any extension. */
AL_API const ALchar* AL_APIENTRY alsoft_get_version(void) noexcept;

typedef void (ALC_APIENTRY*LPALSOFTLOGCALLBACK)(void *userptr, char level, const char *message, int length) noexcept;
void ALC_APIENTRY alsoft_set_log_callback(LPALSOFTLOGCALLBACK callback, void *userptr) noexcept;
