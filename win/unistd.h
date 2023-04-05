#ifndef UNISTD__H
#define UNISTD__H

#include <sys/stat.h>
#include <process.h>

#define stat _stat
inline int lstat(const char *path, struct stat *statbuf) { return _stat(path, statbuf); }

inline int sync() { return 0; }
inline int fsync(int fd) { return _commit(fd); }
inline int ftruncate(int fd, off_t o) { return _chsize(fd, o); }

#endif
