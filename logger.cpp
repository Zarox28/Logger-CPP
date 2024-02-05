/**
 * @file logger.cpp
 *
 * @brief Logger implementation file
 *
 * @author Zarox28
 */

// ----- INCLUDES -----
#include "logger.h"

// ----- LOGGER -----
namespace Logger {
  const void init() { printf("\033[2J\033[H"); }

  const void reset() { printf("\033[%im", RESET); }

  const void debug(const char *msg)
  {
    printf("\033[%i;%im[DEBUG] %s\n", RESET, MAGENTA, msg);
  }

  const void info(const char *msg) { printf("\033[%i;%im[INFO] %s\n", RESET, CYAN, msg); }

  const void success(const char *msg)
  {
    printf("\033[%i;%im[SUCCESS] %s\n", RESET, GREEN, msg);
  }

  const void warn(const char *msg)
  {
    printf(
      "\033[%i;%im[WARN] %s\n", RESET, YELLOW, "***********************************"
    );
    printf("[WARN] %s\n", msg);
    printf(
      "\033[%i;%im[WARN] %s\n", RESET, YELLOW, "***********************************"
    );
  }

  const void error(const char *msg)
  {
    printf("\033[%i;%im[ERROR] %s\n", RESET, RED, msg);
  }

  const void fatal(const char *msg)
  {
    printf("\033[%i;%im[FATAL] %s\n", RESET, RED, "***********************************");
    printf("[FATAL] \033[%im%s\n", BLINK, msg);
    printf("\033[%i;%im[FATAL] %s\n", RESET, RED, "***********************************");
  }
}  // namespace Logger
