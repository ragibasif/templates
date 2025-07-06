/*
 * File: contact.js
 * Author: Ragib Asif
 * Email: 182296466+ragibasif@users.noreply.github.com
 * GitHub: https://github.com/ragibasif
 * LinkedIn: https://www.linkedin.com/in/ragibasif/
 * SPDX-License-Identifier: MIT
 * Copyright (c) 2025 Ragib Asif
 * Version 1.0.0
 *
 */

import { externalLink } from "./utils.js";

const NAME = "Ragib Asif";

const SOCIALS = [
  {
    name: "GitHub",
    url: "https://github.com/ragibasif",
  },
  {
    name: "LinkedIn",
    url: "https://linkedin.com/in/ragibasif",
  },
  {
    name: "Email",
    url: "mailto:182296466+ragibasif@users.noreply.github.com",
  },
];

export function renderSocials = () =>  {
  const socialsContainer = document.getElementById(CONTAINERS.socials);
  const socialsList = document.createElement("ul");
  SOCIALS.forEach((social) => {
    const listItem = document.createElement("li");
    const link = document.createElement("a");
    externalLink(link, social.url, social.name);
    listItem.appendChild(link);
    socialsList.appendChild(listItem);
  });
  socialsContainer.appendChild(socialsList);
}
