# Writing and presentation guide

Use this guide for the report chapters and Wiki. Keep the English direct, the terminology consistent and each claim tied to its evidence.

## Start with the finding

Each chapter starts with a question, a result and unfinished work. The reader should understand these three points before reading addresses or test details.

State the main finding before explaining the mechanism. Place the test conditions and evidence limits beside that finding. Keep detailed source trails available below.

## Write one idea at a time

- Keep descriptive sentences within 25 words. Keep instructions within 20 words.
- Use active voice when the actor is known. Use simple tenses when they preserve the meaning.
- Give one instruction per sentence. Use a list for three or more steps or conditions.
- Keep each paragraph on one topic, with no more than six sentences.
- Avoid semicolons, vague qualifiers and marketing adjectives.
- Prefer a direct verb, such as “check,” over a phrase such as “perform a check.”

Preserve qualifications such as “may,” “reported” and “in this test.” A shorter sentence must not make a stronger claim.

These are simplified technical English principles for explanatory prose. They do not certify compliance with an official controlled vocabulary.

## Keep technical terms consistent

| Term | Meaning in this report |
| --- | --- |
| Guest | The PS2 system that the translated game expects |
| Host | The device that executes the translated game |
| Gameplay tick | One update of gameplay state |
| Render update | One completed guest rendering iteration |
| Shown update | A browser callback that observes new game output |
| Canonical state | The gameplay state retained at a regular simulation update |
| Fixture | A fixed test setup with known players, state and inputs |
| Checkpoint | A selected gameplay tick where clients compare state |

Define uncommon terms at their first use. Keep original function names, addresses, file paths and build identifiers exact.

## Highlight findings with their limits

Use no more than two callouts in a chapter. Choose the finding that changes how the reader understands the experiment.

| Markdown marker | Wiki label | Use |
| --- | --- | --- |
| `[!IMPORTANT]` | Key finding | A measured result or an established mechanism |
| `[!NOTE]` | Context & limits | Conditions needed to interpret a claim |
| `[!TIP]` | Next check | A proposed experiment or integration step |

Write these markers inside Markdown blockquotes. The Wiki adds visual styling during the build. Markdown remains the only copy of the content.

Start a callout with a short, bold statement. Put its conditions and source link in the same callout when they are necessary to interpret it.

Bold selected claims, numbers and decisive conditions. Keep their units visible. Do not use color alone to distinguish a result from a limitation.

A callout is an editorial summary. Do not present it as a quotation from a participant or external source.

## Preserve the research record

Keep historical measurements, devices and builds separate. Describe a proposed test as proposed. Do not convert a native result into browser or phone evidence.

Keep failed experiments when they explain a decision. Preserve links to the selected records and their source fingerprints.

Reader tests check presentation and navigation. They do not add evidence about game performance. See [Evidence conventions](EVIDENCE.md).
