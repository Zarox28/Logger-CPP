/**
 * @file logger.h
 * @brief Logger implementation file
 * @author Zarox28
 */

#ifndef LOGGER_H
#define LOGGER_H

// ----- INCLUDES -----
#include "stdio.h"

// ----- TERMINAL CODES -----
enum TerminalCodes
{
  CYAN    = 36,
  YELLOW  = 33,
  RED     = 31,
  MAGENTA = 35,
  GREEN   = 32,
  BLINK   = 5,
  RESET   = 0
};

// ----- LOGGER -----
namespace Logger {
  /**
   * @brief Log a debug message
   * @param msg The message to log
   * @return void
   */
  const void debug(const char* msg);

  /**
   * @brief Log an info message
   * @param msg The message to log
   * @return void
   */
  const void info(const char* msg);

  /**
   * @brief Log a success message
   * @param msg The message to log
   * @return void
   */
  const void success(const char* msg);

  /**
   * @brief Log a warning message
   * @param msg The message to log
   * @return void
   */
  const void warn(const char* msg);

  /**
   * @brief Log an error message
   * @param msg The message to log
   * @return void
   */
  const void error(const char* msg);

  /**
   * @brief Log a fatal message
   * @param msg The message to log
   * @return void
   */
  const void fatal(const char* msg);
}  // namespace Logger

#endif  // LOGGER_H
