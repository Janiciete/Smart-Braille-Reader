# Smart-Braille-Reader

DEBUT 2B Braille Reader Codebase

Firmware and software for the Cornell DEBUT 2B Braille Reader, a low-cost assistive device that reads embossed Braille aloud.

## About

The user glides a finger-mounted sensor across a line of Braille. Sensors arranged in the 2×3 Braille cell pattern detect which dots are raised. A component(s) groups those readings into individual Braille characters, looks each one up in a Braille-to-text table, and plays the result through a small audio output.

The device is meant to support both learning Braille and reading Braille found in everyday settings, such as signs, elevator buttons, and labels. It aims to cost far less than existing refreshable Braille displays.

## Software Pipeline

1. **Sensing**: read the pressure sensors and convert each reading to dot / no dot.
2. **Segmentation**: separate one Braille character from the next as the finger moves.
3. **Translation**: map each 6-dot pattern to a letter, number, or symbol.
4. **Audio output**: speak the decoded letters and words.

## Status

Early development. Current work focuses on segmentation. Awaiting electrical understanding.

## Team

Cornell DEBUT (Design by Biomedical Undergraduate Teams), Team 2B, Braille Reader project.
