<p align="center">
  <h1 align="center">💀 GTA: Terminal Edition</h1>
  <p align="center">A chaotic open-world crime simulator. No graphics. No map. No budget. Maximum chaos.</p>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/language-C-blue?style=for-the-badge&logo=c" />
  <img src="https://img.shields.io/badge/dependencies-zero-brightgreen?style=for-the-badge" />
  <img src="https://img.shields.io/badge/graphics-none-red?style=for-the-badge" />
  <img src="https://img.shields.io/badge/chaos-maximum-orange?style=for-the-badge" />
</p>

---

```
==============================
   GTA: Terminal Edition 💀
==============================

--- WHAT DO YOU WANT TO DO? ---
1. Work 💼
2. Rob Bank 💰
3. Fight 🥊
4. Rest 😴
Choice: 2

Robbery success! You grabbed $100. 💰

🚔 POLICE ARE AFTER YOU!
You escaped! But they're still watching.

Health: 95 | Money: $200 | Wanted: 2 star(s)
```

---

## What Is This?

It's GTA. In your terminal. Written in pure C with zero dependencies.

You work jobs, rob banks, start fights, dodge the police, and try not to die. Every run is different. Most runs end badly. That's the point.

---

## Gameplay

| Action | Risk | Reward |
|--------|------|--------|
| 💼 Work | Low : costs 5 health | +$20 |
| 💰 Rob Bank | High : 50% chance of getting caught | +$100 |
| 🥊 Fight | Medium : 50% chance of losing badly | +$30 |
| 😴 Rest | None | +20 health |

### The Wanted System
Rob banks and your wanted level climbs. Hit **3 stars** and the police start chasing you every single turn. Get caught and you lose health, lose money, and get sent back to zero stars, bruised and broke.

> The tension is the game. You always want to rob one more bank. You usually shouldn't.

---

## Getting Started

### Prerequisites

- A C compiler (GCC recommended)
- A terminal
- Poor decision-making skills

### Install & Run

**Linux / Mac**
```bash
git clone https://github.com/yourusername/gta-terminal
cd gta-terminal
gcc gta_terminal.c -o gta && ./gta
```

**Windows (WSL)**
```bash
git clone https://github.com/yourusername/gta-terminal
cd gta-terminal
gcc gta_terminal.c -o gta && ./gta
```

**No compiler? No problem.**
Paste the code into [OnlineGDB](https://www.onlinegdb.com/) and hit Run.

---

## Tips for Surviving Longer Than 5 Turns

- Don't rob the bank twice in a row
- Rest before your health hits 30
- Once wanted hits 2 stars, play it safe for a turn
- There is no tip for winning. There is only delay.

---

## What's Under the Hood

Built with nothing but the C standard library:

- `stdio.h` - terminal input/output
- `stdlib.h` - random number generation  
- `time.h` - seeding randomness so every run is different

**Core concepts:**
- Game loop (`while health > 0`)
- State machine (health / money / wanted tracking)
- Random events (`rand() % 2` coin flips)
- Escalating consequences (the wanted system)

---

## Project Structure

```
gta-terminal/
└── gta_terminal.c    # the whole game. one file. that's it.
```

---

## Want to Hack On It?

Some ideas to take it further:

- 🛒 **Shop system** : buy weapons or a safe house with your money
- 💾 **Save scores** : write final money to `scores.txt` with `fopen()`
- 🎯 **Missions** : "Rob 3 banks without getting caught" as a win condition
- 📉 **Difficulty scaling** : wanted penalties get worse as money grows
- 🗺️ **Locations** : add a neighborhood system with different risk/reward profiles

---

## License

MIT : do whatever you want with it. Rob a bank, even.

---
