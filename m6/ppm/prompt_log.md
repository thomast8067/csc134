markdown
# PPM Image Generator - Prompt Engineering Log
## Attempt 1
**Prompt**: "write a simple c++ program to generate a ppm image that is 200x200 that draws a circle"
**Result**: Claude wrote the code and it worked as I expected on the first try.
**What I learned**: Specifying the dimensions of the image made it simpler for Claude to write.
---
## Attempt 2
**Prompt**: "add a gradient on the inside of the circle so that the center of the circle is pure red, and then as it goes to the edge it goes to pure blue"
**What I changed**: I added a gradient to the inside of the circle and Claude added it as I expected.
**Result**: The circle had a red to blue gradient on the inside of the circle, from the center to the edge.
---
## Final Reflection
- Total attempts: 2
- Most helpful prompt technique: Being exact in your specifications let the AI know exactly what I wanted and not misinterpret my prompts.
- Biggest prompting mistake: Nothing really went wrong here as the prompts were simple and exact.
- How I verified the code works: I ran the code in my github codespace and converted the ppm files to png files.