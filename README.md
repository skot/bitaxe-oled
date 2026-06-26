# bitaxe-oled LVGL Pro UI

Base LVGL Pro project for a 128x32 SSD1306 OLED UI for bitaxe.

## Open in the web editor

1. Push this repository to GitHub.
2. Open [viewer.lvgl.io](https://viewer.lvgl.io).
3. Paste the repository URL:

   ```text
   https://github.com/skot/bitaxe-oled
   ```

The project root contains the `project.xml` and `globals.xml` files required by LVGL Online Share.

## Project layout

```text
project.xml          LVGL version and 128x32 preview target
globals.xml          Shared OLED styles, constants, and data subjects
screens/             Screen XML files
components/          Reusable LVGL Pro components
widgets/             Custom widgets
fonts/               Optional font sources
images/              Optional image assets
```

## Font

The project uses `font_portfolio_6x8`, matching ESP-Miner's `lv_font_portfolio_6x8` default OLED font from `~/Bitcoin/esp-miner/esp-miner/main/lv_font_portfolio-6x8.c`.

Source font: `fonts/Mx437_Portfolio_6x8.ttf` from The Ultimate Oldschool PC Font Pack v2.2. License and upstream readme are kept in `fonts/LICENSE.TXT` and `fonts/README.TXT`.

## Starter screen

The initial screen is `screens/screen_status.xml`. It is sized for the 128x32 SSD1306 and uses a monochrome black/white style so edits preview close to the real OLED constraints.
