#ifndef _BYND_VERSION_H_
#define _BYND_VERSION_H_

#define BYND_VERSION			"0.1"
#define BYND_VERSION_NAME		"Version 0.1"
#define BYND_VERSION_DATE		"21/08/2021"
#define BYND_VERSION_TIME		"20:52 CST"
#define BYND_VERSION_AUTHOR		"Erick Salas"

// print full bynd version information
extern void bynd_version_print_full (void);

// print the version id
extern void bynd_version_print_version_id (void);

// print the version name
extern void bynd_version_print_version_name (void);

#endif