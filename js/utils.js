/*
 * File: utils.js
 * Author: Ragib Asif
 * Email: 182296466+ragibasif@users.noreply.github.com
 * GitHub: https://github.com/ragibasif
 * LinkedIn: https://www.linkedin.com/in/ragibasif/
 * SPDX-License-Identifier: MIT
 * Copyright (c) 2025 Ragib Asif
 * Version 1.0.0
 *
 */

export const externalLink = (element, { url, text }) => {
  Object.assign(element, {
    href: url,
    target: "_blank",
    rel: "noopener noreferrer",
    textContent: text,
  });
};
