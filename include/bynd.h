#ifndef _BYND_H_
#define _BYND_H_

#include "runtime.h"

struct _HttpResponse;

extern RuntimeType RUNTIME;

extern unsigned int PORT;

extern unsigned int CERVER_RECEIVE_BUFFER_SIZE;
extern unsigned int CERVER_TH_THREADS;
extern unsigned int CERVER_CONNECTION_QUEUE;

// inits bynd main values
extern unsigned int bynd_init (void);

// ends bynd main values
extern unsigned int bynd_end (void);

#endif