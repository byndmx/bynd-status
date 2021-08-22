#include <cerver/utils/log.h>

#include "version.h"

// print full test version information
void bynd_version_print_full (void) {

	cerver_log_both (
		LOG_TYPE_NONE, LOG_TYPE_NONE,
		"\nBynd Status Service Version: %s", BYND_VERSION_NAME
	);

	cerver_log_both (
		LOG_TYPE_NONE, LOG_TYPE_NONE,
		"Release Date & time: %s - %s", BYND_VERSION_DATE, BYND_VERSION_TIME
	);

	cerver_log_both (
		LOG_TYPE_NONE, LOG_TYPE_NONE,
		"Author: %s\n", BYND_VERSION_AUTHOR
	);

}

// print the version id
void bynd_version_print_version_id (void) {

	cerver_log_both (
		LOG_TYPE_NONE, LOG_TYPE_NONE,
		"\nBynd Status Service Version ID: %s\n", BYND_VERSION
	);

}

// print the version name
void bynd_version_print_version_name (void) {

	cerver_log_both (
		LOG_TYPE_NONE, LOG_TYPE_NONE,
		"\nBynd Status Service Version: %s\n", BYND_VERSION_NAME
	);

}
