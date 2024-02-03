/**
 * @file logger.cpp
 * @brief Logger implementation file
 * @author Zarox28
 */

// ----- INCLUDES -----
#include "logger.h"

// ----- LOGGER -----
namespace Logger {
  extern const void debug(const char *msg)
  {
    printf("\033[%i;%im[DEBUG] %s\n", RESET, MAGENTA, msg);
  }

  extern const void info(const char *msg)
  {
    printf("\033[%i;%im[INFO] %s\n", RESET, CYAN, msg);
  }

  extern const void success(const char *msg)
  {
    printf("\033[%i;%im[SUCCESS] %s\n", RESET, GREEN, msg);
  }

  extern const void warn(const char *msg)
  {
    printf(
      "\033[%i;%im[WARN] %s\n", RESET, YELLOW, "***********************************"
    );
    printf("[WARN] %s\n", msg);
    printf(
      "\033[%i;%im[WARN] %s\n", RESET, YELLOW, "***********************************"
    );
  }

  extern const void error(const char *msg)
  {
    printf("\033[%i;%im[ERROR] %s\n", RESET, RED, msg);
  }

  extern const void fatal(const char *msg)
  {
    printf("\033[%i;%im[FATAL] %s\n", RESET, RED, "***********************************");
    printf("[FATAL] \033[%im%s\n", BLINK, msg);
    printf("\033[%i;%im[FATAL] %s\n", RESET, RED, "***********************************");
  }
}  // namespace Logger
