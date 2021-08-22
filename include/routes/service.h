#ifndef _BYND_ROUTES_MAIN_H_
#define _BYND_ROUTES_MAIN_H_

struct _HttpReceive;
struct _HttpRequest;

// GET /bynd
extern void bynd_handler (
	const struct _HttpReceive *http_receive,
	const struct _HttpRequest *request
);

// GET /bynd/version
extern void bynd_version_handler (
	const struct _HttpReceive *http_receive,
	const struct _HttpRequest *request
);

// GET *
extern void bynd_catch_all_handler (
	const struct _HttpReceive *http_receive,
	const struct _HttpRequest *request
);

#endif