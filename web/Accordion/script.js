const faqs = [
  {
    question: "What is hacktoberfest ?",
    answer:
      "Hacktoberfest: a month-long celebration of open-source projects, their maintainers, and the entire community of contributors.",
  },
  {
    question: "How do I get started?",
    answer:
      'Register at https://hacktoberfest.digitalocean.com/ Submit a PR to any public GitHub repository. Quality contributions are encouraged! You can look for open issues labeled "Hacktoberfest" for inspiration.',
  },
  {
    question: "How do I get stickers?",
    answer: "Stickers are included with your t-shirt, once you complete 5 PRs.",
  },
  {
    question:
      "What happens if I complete fewer than 5 PRs by the end of the month?",
    answer:
      "Unfortunately you will have to submit at least 5 PRs in order to get a T-shirt.",
  },
];

const accordionContainer = document.querySelector(".accordion-container");

const initializeAccordion = () => {
  faqs.forEach((faq, index) => {
    const accordionItem = `
        <details ${index === 0 && "open"}>
            <summary>
                <h1>${faq.question}</h1>
            </summary>
            <p>${faq.answer}</p>
        </details>
        `;
    console.log(accordionItem);
    const wrapperItem = document.createElement("div");
    wrapperItem.innerHTML = accordionItem;
    accordionContainer.appendChild(wrapperItem);
  });
};
initializeAccordion();
