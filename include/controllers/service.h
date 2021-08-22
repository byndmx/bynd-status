#ifndef _BYND_MAIN_H_
#define _BYND_MAIN_H_

struct _HttpResponse;

extern struct _HttpResponse *bynd_works;
extern struct _HttpResponse *current_version;

extern struct _HttpResponse *catch_all;

extern unsigned int bynd_service_init (void);

extern void bynd_service_end (void);

#endif