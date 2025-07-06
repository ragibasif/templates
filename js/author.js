/*
 * File: author.js
 * Author: Ragib Asif
 * Email: 182296466+ragibasif@users.noreply.github.com
 * GitHub: https://github.com/ragibasif
 * LinkedIn: https://www.linkedin.com/in/ragibasif/
 * SPDX-License-Identifier: MIT
 * Copyright (c) 2025 Ragib Asif
 * Version 1.0.0
 *
 * Adds author contact information and dynamically updates the copyright year.
 *
 */

const NAME = "Ragib Asif";

const YEAR = new Date().getFullYear();

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

const CONTAINERS = {
  socials: "socials-container",
  copyright: "copyright-container",
};

function externalLink(item, url, text) {
  item.href = url;
  item.target = "_blank";
  item.rel = "noopener noreferrer";
  item.innerText = text;
}

function renderSocials() {
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

function renderCopyright() {
  const copyrightText = document.createElement("p");
  copyrightText.innerHTML = `&copy; ${YEAR} ${NAME}. All rights reserved.`;
  const copyrightContainer = document.getElementById(CONTAINERS.copyright);
  copyrightContainer.append(copyrightText);
}

renderSocials();
renderCopyright();
